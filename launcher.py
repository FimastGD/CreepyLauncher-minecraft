import os
import time
import sys
import tkinter as tk
import tkinter.messagebox as mb
import ctypes
import colorama
import webbrowser






def upd_butt_f():
    webbrowser.open_new('http://fgdgdps.ru/creepylaunch/sources')









def b171_start():
    # b171 = r"C:\Program Files (x86)\creepytoast\java\b171\preload.bat"
    # os.system("""C:\Program Files (x86)\creepytoast\java\b171\preload.bat""")
    # dirjb171 = os.getcwd()
    os.system('C:\\creepytoast\\java\\jb171\\preload.bat')
    
def hex_start():
    os.system('C:\\creepytoast\\java\\jhex01\\load.exe')

def err422_start():
    os.system('C:\\creepytoast\\java\\err422\\load.exe')










main = tk.Tk()
main.title('Creepy launcher')
main.geometry('800x600+350+100')
main.resizable(False, False)
main.iconbitmap('icon.ico')


main_ver = tk.Label(main, text='Версия лаунчера: Release 1.1')
main_ver.pack()


main_label = tk.Label(main, text='Выберите версию из списка',
                      font=('Arial',20))
main_label.pack()




b171 = tk.Button(main, text='Запуск Beta-1.7.1',
                    font=(7),
                    command=b171_start )

b171.pack()

hex = tk.Button(main, text='Запуск Hex 01',
                    font=(7),
                    command=hex_start )

hex.pack()
hex.place(y=105, x=340)

err422 = tk.Button(main, text='Запуск ERROR_422',
                    font=(7),
                    command=err422_start )

err422.pack()
err422.place(y=155, x=320)

upd = tk.Label(main, text='Может, вышло новое обновление? Проверь официальный сайт!',
                      font=('Arial',15),
                      fg='blue')
upd.pack()
upd.place(x=110, y=215)

upd_butt = tk.Button( main, text='Проверить обновления',
                    font=(7),
                    bg='blue',
                    fg='white',
                    activebackground='#3399FF',
                    activeforeground='white',
                    command=upd_butt_f )

upd_butt.pack()
upd_butt.place(y=260, x=320)

wnew = tk.Label(main, text='Что нового в 1.1',
                      font=('Arial',15,"bold"))
wnew.pack()
wnew.place(y=340, x=320)

wnew11_1 = tk.Label(main, text='- Исправлена ошибка запуска Beta 1.7.1',
                      font=('Arial',13,))
wnew11_1.pack()
wnew11_1.place(y=380)
wnew11_2 = tk.Label(main, text='- Уменьшен размер лаунчера',
                      font=('Arial',13))
wnew11_2.pack()
wnew11_2.place(y=410)




main.mainloop()

# os.system("pause")