## Overview
Prompts the user for paths of input and output files, then copies the input file data to the output file.

## Why getline() ?
The paths are better taken using `getline()` because the paths may contain spaces. `cin` ignores whitespaces.
