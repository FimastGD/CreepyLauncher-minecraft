import os
import time
import sys
import tkinter as tk
import tkinter.messagebox as mb
import ctypes

with open ("options.txt", "r+") as myfile:
    data = myfile.read()
    

def install():
    # b171 = r"C:\Program Files (x86)\creepytoast\java\b171\preload.bat"
    # os.system("""C:\Program Files (x86)\creepytoast\java\b171\preload.bat""")
    # dirjb171 = os.getcwd()
        
    os.system('C:\\creepytoast\\java\\jdk\\jdk.exe')

    with open ("options.txt", "r+") as myfile:
        data2 = data.replace('0', '2')
        myfile.write(data2)
    
    
def skip():
    # b171 = r"C:\Program Files (x86)\creepytoast\java\b171\preload.bat"
    # os.system("""C:\Program Files (x86)\creepytoast\java\b171\preload.bat""")
    # dirjb171 = os.getcwd()
    warn = "Рекомендуем установить JDK, нажмите OK чтобы пропустить"
    mb.showwarning(title="JDK not found", message=warn)

    os.system('C:\\creepytoast\\launcher.exe')



print(f'[LOG] File \'options.txt\' successful loaded. data={data}')


if data == '0':   

    main = tk.Tk()
    main.title('Warning')
    main.geometry('750x350+350+170')
    main.resizable(False, False)
    main.iconbitmap('icon.ico')


    main_ver = tk.Label(main, text='Версия лаунчера: Release 1.1')
    main_ver.pack()


    main_label = tk.Label(main, text=f'Предупреждение',
                        font=('Arial',20),
                        fg='red')
    main_label.pack()

    main_label2 = tk.Label(main, text='Для корректной работы лаунчера и Minecraft\nнастоятельно рекомендуем установить JDK (java)',
                        font=('Arial',11),
                        fg='black')
    main_label2.pack()



    javab = tk.Button(main, text='Установить JDK',
                        font=(7),
                        bg="#99FF33",
                        command=install)

    javab.pack()





    skp = tk.Button(main, text='Пропустить',
                        font=(7),
                        bg="#FF9999",
                        command=skip )

    skp.pack()
    skp.place(y=140, x=327)
    
    info = tk.Label(main, text=f'После установки JDK перезайдите в лаунчер!',
                        font=('Arial',12),
                        fg='white',
                        bg="#FF8000")
    info.pack()
    info.place(y=220, x=220)

    info2 = tk.Label(main, text=f'''Внимание! ПОСЛЕ ОБНОВЛЕНИЯ со старой версии
    может слететь файл проверки на JDK, чтобы это исправить
    нажмите УСТАНОВИТЬ JDK, закройте окно установки и перезайдите
    в лаунчер. НЕ ИСПОЛЬЗУЙТЕ ДАННЫЙ МЕТОД ЕСЛИ ВЫ ПЕРВЫЙ РАЗ
    УСТАНОВИЛИ ЛАУНЧЕР!!!!!''',
                        font=('Arial',12,"bold"),
                        fg='white',
                        bg="#FF3300")
    info2.pack()
    info2.place(y=220, x=95)
    main.mainloop()
if data != '0':
     os.system('C:\\creepytoast\\launcher.exe')

