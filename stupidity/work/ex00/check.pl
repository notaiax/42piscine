#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex00/main';
						my $output;
						my $expected;
						die "ex00/main failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = "1, 'asdf' vs 'asdf'
1, '' vs ''
1, 'hello world!' vs 'hello world!'
";

						


						if ($output eq $expected) {
							say 'work/ex00/main good!';
						} else {
							say "!!!! ERROR in work/ex00/main: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					