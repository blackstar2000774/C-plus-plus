fun main() {
    val n = readLine()!!.toInt()
    println("Calculating for n = $n")
    
    // Calculate roots of a quadratic equation (e.g., x^2 - 5x + 6 = 0)
    val (root1, root2) = calculateRoots(1.0, -5.0, 6.0)
    if (root1 != null && root2 != null) {
        println("Real roots: $root1, $root2")
    } else {
        println("Imaginary roots: ${root1 ?: "No real root"}, ${root2 ?: "No real root"}")
    }

    // Generate Fibonacci series
    println("Fibonacci series up to $n terms: ${fibonacci(n)}")

    // Calculate factorial
    println("Factorial of $n: ${factorial(n)}")
}

// Function to calculate roots of a quadratic equation ax^2 + bx + c = 0
fun calculateRoots(a: Double, b: Double, c: Double): Pair<Double?, Double?> {
    val discriminant = b * b - 4 * a * c
    return if (discriminant > 0) {
        val root1 = (-b + Math.sqrt(discriminant)) / (2 * a)
        val root2 = (-b - Math.sqrt(discriminant)) / (2 * a)
        Pair(root1, root2)
    } else if (discriminant == 0.0) {
        val root = -b / (2 * a)
        Pair(root, root)
    } else {
        Pair(null, null) // Indicating imaginary roots
    }
}

// Function to generate Fibonacci series up to n terms
fun fibonacci(n: Int): List<Int> {
    val fibList = mutableListOf<Int>()
    var a = 0
    var b = 1
    repeat(n) {
        fibList.add(a)
        val temp = a
        a = b
        b = temp + b
    }
    return fibList
}

// Function to calculate factorial of n
fun factorial(n: Int): Int {
    return (1..n).fold(1) { acc, i -> acc * i }
}
