#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex04/main_junk';
						my $output;
						my $expected;
						die "ex04/main_junk failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = "'lol','hi',";

						


						if ($output eq $expected) {
							say 'work/ex04/main_junk good!';
						} else {
							say "!!!! ERROR in work/ex04/main_junk: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					