class Pattern:

    def inverted_right_half_triangle(count):
        for i in range(0, count, 1):
            for j in range(i, count):
                print("*", end=" ")
            print(" ")

    def right_half_triangle(count):
        for i in range(0,count+1, 1):
            for j in range(0,i,1):
                print("*",end=" ")
            print(" ")

    # def left_half_triangle(count):
    #     for i in range(1, count + 1):
    #         print('*' * i)

