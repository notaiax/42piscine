#!/usr/bin/env perl
					use strict;
					use warnings;
					use feature 'say';

					my $program = './work/ex04/ft_sort_params';
					my $output;
					my $expected;

					

my %tests;

					%tests = (
	"$program" => "",
	"$program asdf beta char" => "asdf\nbeta\nchar\n",
	"$program abcd abc ab a" => "a\nab\nabc\nabcd\n",
	"$program zxcv '' qwer 1234 asdf" => "\n1234\nasdf\nqwer\nzxcv\n",
);

					


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex04/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex04/check.pl good!';
					}
				
				