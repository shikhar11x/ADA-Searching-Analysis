import matplotlib.pyplot as plt


input_sizes = [10, 20, 30, 40]
linear_best = [1, 1, 1, 1]
linear_avg = [2, 8, 5, 21]
linear_worst = [10, 20, 30, 40]
binary_best = [1, 1, 1, 1]
binary_avg = [2, 4, 4, 5]
binary_worst = [4, 5, 5, 6]
    
    
plt.figure(figsize=(8, 5))
plt.plot(input_sizes, linear_best, 'g-o', label='Linear Best Case')
plt.plot(input_sizes, binary_best, 'g--s', label='Binary Best Case')
plt.xlabel("Input Size")
plt.ylabel("Number of Steps")
plt.title("Best Case: Linear vs Binary Search")
plt.legend()
plt.grid(True)
plt.show()


plt.figure(figsize=(8, 5))
plt.plot(input_sizes, linear_avg, 'b-o', label='Linear Avg Case')
plt.plot(input_sizes, binary_avg, 'b--s', label='Binary Avg Case')
plt.xlabel("Input Size")
plt.ylabel("Number of Steps")
plt.title("Average Case: Linear vs Binary Search")
plt.legend()
plt.grid(True)
plt.show()

   
plt.figure(figsize=(8, 5))
plt.plot(input_sizes, linear_worst, 'r-o', label='Linear Worst Case')
plt.plot(input_sizes, binary_worst, 'r--s', label='Binary Worst Case')
plt.xlabel("Input Size")
plt.ylabel("Number of Steps")
plt.title("Worst Case: Linear vs Binary Search")
plt.legend()
plt.grid(True)
plt.show()


   
