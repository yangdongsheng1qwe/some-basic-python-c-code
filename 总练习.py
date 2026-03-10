#教务管理系统
print("""
################【菜单】##############
#   1、添加学生信息        #
#   2、修改学生信息        #
#   3、删除学生信息        #
#   4、查询学生信息        #
#   5、列出所有学生        #
#   6、统计班级成绩        #
#   7、退出系统           #
""")
students = {}
while True:
    n = input("请输入数字")
    match n:
        case "1":
            #输入姓名、语文、数学、英语
            name1 = input("请输入学生姓名")
            chinese = int(input("请输入学生语文成绩"))
            math = int(input("请输入学生数学成绩"))
            english = int(input("请输入英语成绩"))
            students[name1] = {"语文":chinese,"数学":math,"英语":english}
        case "2":
            #修改学生信息
            name2 = input("请输入修改学生的姓名")
            subject = input("请输入要修改的科目")
            grades = int(input("请输入要改的成绩"))
            students[name2][subject] = grades
        case "3":
            #删除学生信息
            name3 = input("请输入要删除学生姓名")
            del students[name3]
        case "4":
            #查询学生信息
            name4 = input("请输入查询学生姓名")
            print(f"{name4} 语文：{students[name4]["语文"]} 数学：{students[name4]["数学"]} 英语{students[name4]["英语"]}")
        case "5":
            #遍历
            for name in students:
                print(f"{name} 语文：{students[name]["语文"]} 数学：{students[name]["数学"]} 英语{students[name]["英语"]}")
        case "6":
            break
        case _:
            print("重新输入")

