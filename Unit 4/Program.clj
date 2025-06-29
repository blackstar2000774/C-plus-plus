(ns math-calculations
  (:require [clojure.math.numeric-tower :as math]))

; Function to calculate roots of a quadratic equation ax^2 + bx + c = 0
(defn calculate-roots [a b c]
  (let [discriminant (- (* b b) (* 4 a c))
        root1 (if (>= discriminant 0)
                 (/ (+ (- b) (math/sqrt discriminant)) (* 2 a))
                 nil)
        root2 (if (>= discriminant 0)
                 (/ (- (- b) (math/sqrt discriminant)) (* 2 a))
                 nil)]
    (if (>= discriminant 0)
      {:real [root1 root2]}
      {:imaginary [(str "Real: " (- b) "/(2*" a ")") (str "Imaginary: " (math/sqrt (- discriminant)) "/(2*" a ")")]})))

; Function to generate Fibonacci series up to n terms
(defn fibonacci [n]
  (loop [a 0 b 1 result [] count n]
    (if (zero? count)
      result
      (recur b (+ a b) (conj result a) (dec count)))))

; Function to calculate factorial of n
(defn factorial [n]
  (reduce * (range 1 (inc n))))

; Main function to execute the calculations
(defn main []
  (let [n (Integer/parseInt (read-line))]
    (println "Calculating for n =" n)
    
    ; Calculate roots of a quadratic equation (e.g., x^2 - 5x + 6 = 0)
    (let [roots (calculate-roots 1 -5 6)]
      (if (:real roots)
        (println "Real roots:" (:real roots))
        (println "Imaginary roots:" (:imaginary roots))))

    ; Generate Fibonacci series
    (println "Fibonacci series up to" n "terms:" (fibonacci n))
    
    ; Calculate factorial
    (println "Factorial of" n ":" (factorial n))))

; Uncomment below line to run the program
; (main)
