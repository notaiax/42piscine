#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex04/main_basic';
						my $output;
						my $expected;
						die "ex04/main_basic failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = "'asdf','qwerty','zxcv',
's1','s2','s3',
";

						


						if ($output eq $expected) {
							say 'work/ex04/main_basic good!';
						} else {
							say "!!!! ERROR in work/ex04/main_basic: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					