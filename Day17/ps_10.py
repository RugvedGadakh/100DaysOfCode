n = int(input())
student_marks = {}
for _ in range(n):
    name, *line = input().split()
    marks = float(input())
    student_marks[name] = marks
print(student_marks)