import time
import threading
from pynput.mouse import Controller, Button
from pynput.keyboard import Listener, KeyCode

toogle_key = KeyCode(char="i")

clicking = False
mouse = Controller()

def clicker():
  while True:
    if clicking:
      mouse.click(Button.left, 1)
    time.sleep(0.000001)

def togle_event(key):
  if key == toogle_key:
    global clicking
    clicking = not clicking

click_thread = threading.Thread(target=clicker)
click_thread.start()

with Listener(on_press=togle_event) as listener:
  listener.join()