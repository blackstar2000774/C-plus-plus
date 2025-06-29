-- Function to calculate roots of a quadratic equation ax^2 + bx + c = 0
function calculate_roots(a, b, c)
    local discriminant = b^2 - 4 * a * c
    if discriminant > 0 then
        local root1 = (-b + math.sqrt(discriminant)) / (2 * a)
        local root2 = (-b - math.sqrt(discriminant)) / (2 * a)
        return root1, root2
    elseif discriminant == 0 then
        local root = -b / (2 * a)
        return root, root
    else
        return nil, nil  -- Indicating imaginary roots
    end
end

-- Function to generate Fibonacci series up to n terms
function fibonacci(n)
    local fib_list = {}
    local a, b = 0, 1
    for i = 1, n do
        table.insert(fib_list, a)
        local temp = a
        a = b
        b = temp + b
    end
    return fib_list
end

-- Function to calculate factorial of n
function factorial(n)
    local result = 1
    for i = 1, n do
        result = result * i
    end
    return result
end

-- Main program
print("Enter a non-negative integer: ")
local n = tonumber(io.read())

-- Calculate roots of a quadratic equation (e.g., x^2 - 5x + 6 = 0)
local root1, root2 = calculate_roots(1, -5, 6)
if root1 and root2 then
    print("Real roots: " .. root1 .. ", " .. root2)
else
    print("Imaginary roots")
end

-- Generate Fibonacci series
local fib_series = fibonacci(n)
print("Fibonacci series up to " .. n .. " terms: " .. table.concat(fib_series, ", "))

-- Calculate factorial
local fact = factorial(n)
print("Factorial of " .. n .. ": " .. fact)
-- Explanation
Roots Calculation:

The calculate_roots function computes the roots of the quadratic equation 
𝑎𝑥^2+𝑏𝑥+𝑐=0 using the discriminant. It returns the roots or nil for imaginary roots.
Fibonacci Series:

The fibonacci function generates a list of Fibonacci numbers up to 
𝑛 terms.
Factorial Calculation:
The factorial function calculates the factorial of 
𝑛 using a simple loop.
Main Program:
The program prompts the user for input, calls the necessary functions, and prints the results.
