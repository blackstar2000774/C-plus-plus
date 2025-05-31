fun sierpinskiArea(side: Double, iterations: Int): Double {
    // Area of the initial equilateral triangle
    val initialArea = (Math.sqrt(3.0) / 4) * side * side
    // Area after specified iterations
    return initialArea * (1 - Math.pow(0.25, iterations.toDouble()))
}

fun sierpinskiPerimeter(side: Double, iterations: Int): Double {
    // Perimeter increases by a factor of 3 for each iteration
    return side * Math.pow(3.0, iterations.toDouble())
}

fun main() {
    val side: Double
    val iterations: Int

    print("Enter the side length of the Sierpiński triangle: ")
    side = readLine()!!.toDouble()

    print("Enter the number of iterations: ")
    iterations = readLine()!!.toInt()

    // Calculate area and perimeter
    val area = sierpinskiArea(side, iterations)
    val perimeter = sierpinskiPerimeter(side, iterations)

    // Display results
    println("Area of the Sierpiński triangle: $area")
    println("Perimeter of the Sierpiński triangle: $perimeter")
}
