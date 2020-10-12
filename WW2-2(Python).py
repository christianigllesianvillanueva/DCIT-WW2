welcome = input('''Hello, welcome to the area of circle, square, rectangle, and triangle calculator!. 
Please enter to calculate the area of:
C for Circle
S for Square
R for Rectangle
T for Triangle
''')
if welcome == 'C':
    radius = input("You've chosen to compute the area of circle! Please type the radius. ")
    area_of_circle = 3.14*(int(radius))**2
    print('The area of circle is ' + (str(area_of_circle)))
if welcome == 'S':
    side = input("You've chosen to compute the area of square! Please type the side. ")
    area_of_square = int(side)**2
    print('The area of square is ' + (str(area_of_square)))
if welcome == 'R':
    length = input("You've chosen to compute the area of rectangle! Please type the length. ")
    width = input("You've chosen to compute the area of rectangle! Please type the width. ")
    area_of_rectangle = int(length) * int(width)
    print('The area of rectangle is ' + (str(area_of_rectangle)))
if welcome == 'T':
    base = input("You've chosen to compute the area of triangle! Please type the base. ")
    height = input("You've chosen to compute the area of triangle! Please type the height. ")
    area_of_triangle = 0.5 * int(base) * int(height)
    print('The area of triangle is ' + (str(area_of_triangle)))
print('''
Thanks for using this calculator! ♥-♥  ''')
