# Branchless List Output

## Description

This repository experiements with the idea of using `std::exchange` to output a
list in JSON format as a means to generate "branchless" code that is faster. It
turns out that the generated code is the same as that without `std::exchange`
calls. See https://godbolt.org/z/3se9nYEzo for the comparison.

## Build

This builds using GNU Make. Execute `make test` to build.
