NotesOnEclipse
==============

Random notes on my eclipse related development.


# Extending CDT to add macros/includes from a custom build

Aim is to programmatically set macro definitions, include paths and possibly compiler
settings from a build system, usually based on make.

A concrete example is the Android source tree build system.

My usual eclipse setup for android is:

* add the git repositories using EGit
* import each repository as a CDT Makefile project
* build from command line using the usual android lunch/make

This allows me to have EGit working on the source code (which would not be the case
if I would import the whole tree as a single project) to browse history, branch, etc...

Now, the downside is that CDT does not know anything about include paths, defines so that
the indexer can not resolve properly includes and #if...#endif sections.

## Built-in GCC parser

CDT has a built-in GCC parser that can infer the options from the make output, if the compile commands are printed (for android this can be done by giving an additional `showcommands` target on make, for linux kernel one needs V=1).

This also means the build has to be performed from within eclipse,
but eclipse builds each project separately and apparently
**the built-in parser only applies discovered settings to files of the project that runs the build**.

The _solution_ is:
Create a project that does just the build
use a **global** GCC output parser, this means that during a build every projects is considered when looking for resources that match a compile target (c/c++ file)

I now have a small plugin that makes it a bit easier to search and import projects from an AOSP tree (it creates the C++ project and applies the right settings)

## Extension Point: org.eclipse.cdt.core.LanguageSettingsProvider

Not considered now, the solution above seems good enough.

