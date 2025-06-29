#!/usr/bin/perl
use strict;
use warnings;

# Main program
print "Enter a non-negative integer: ";
my $n = <STDIN>;
chomp($n);

# Calculate roots of a quadratic equation (e.g., x^2 - 5x + 6 = 0)
my ($root1, $root2) = calculate_roots(1, -5, 6);
if (defined $root1 && defined $root2) {
    print "Real roots: $root1, $root2\n";
} else {
    print "Imaginary roots\n";
}

# Generate Fibonacci series
my @fibonacci = fibonacci($n);
print "Fibonacci series up to $n terms: @fibonacci\n";

# Calculate factorial
my $factorial = factorial($n);
print "Factorial of $n: $factorial\n";

# Function to calculate roots of a quadratic equation
sub calculate_roots {
    my ($a, $b, $c) = @_;
    my $discriminant = $b**2 - 4 * $a * $c;

    if ($discriminant > 0) {
        my $root1 = (-$b + sqrt($discriminant)) / (2 * $a);
        my $root2 = (-$b - sqrt($discriminant)) / (2 * $a);
        return ($root1, $root2);
    } elsif ($discriminant == 0) {
        my $root = -$b / (2 * $a);
        return ($root, $root);
    } else {
        return (undef, undef); # Indicating imaginary roots
    }
}

# Function to generate Fibonacci series
sub fibonacci {
    my ($n) = @_;
    my @fib_list;
    my ($a, $b) = (0, 1);

    for (my $i = 0; $i < $n; $i++) {
        push @fib_list, $a;
        my $temp = $a;
        $a = $b;
        $b = $temp + $b;
    }
    
    return @fib_list;
}

# Function to calculate factorial of n
sub factorial {
    my ($n) = @_;
    my $result = 1;
    
    for (my $i = 1; $i <= $n; $i++) {
        $result *= $i;
    }
    
    return $result;
}
