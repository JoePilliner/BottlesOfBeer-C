# Bottles of Beer (C)

## Usage:

* ```bottlesofbeer initial_number``` poetically counts down the number of fictional bottles of beer on a fictional wall from an arbitrary unsigned long long integer initial number of fictional bottles of beer on said wall ```initial_number```, with this count optionally underflowing (because I think integer underflows are cute)

## Instructions:

1. In bottlesofbeer.c, define ```BOTTLESOFBEER_UNDERFLOW``` to be 0 or undefine ```BOTTLESOFBEER_UNDERFLOW```, and the number of fictional bottles of beer on the fictional wall will neither underflow nor appear to underflow; define ```BOTTLESOFBEER_UNDERFLOW``` to be non-zero, and the fictional number of bottles of beer on the fictional wall will not underflow, but will appear to underflow.

2. Compile ```bottlesofbeer.c``` to ```bottlesofbeer``` (\*Nix users may use GNU Make (```make```) to compile ```src/bottlesofbeer.c``` to ```bin/bottlesofbeer``` with the GNU Compiler Collection (```cc```) and the POSIX make directory command (```mkdir```).
