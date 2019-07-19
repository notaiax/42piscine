#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex04/main_less';
						my $output;
						my $expected;
						die "ex04/main_less failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = "\n\n";

						


						if ($output eq $expected) {
							say 'work/ex04/main_less good!';
						} else {
							say "!!!! ERROR in work/ex04/main_less: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					