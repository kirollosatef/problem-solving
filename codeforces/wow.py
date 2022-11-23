import pyautogui as pag
import time

pag.moveTo(950, 400 , 1)
pag.click()
pag.hotkey('ctrl', 'a')
pag.moveTo(1777, 17 , 1)
pag.click()
pag.moveTo(950, 400 , 1)
while True:
    pag.doubleClick()
