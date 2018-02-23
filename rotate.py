import subprocess
import time
import signal

def sig_handler(signum, fram):
    print ("OH GOD DON'T TOUCH ME")

signal.signal(signal.SIGINT, sig_handler);
signal.signal(signal.SIGTSTP, sig_handler);
while True:
    subprocess.Popen(["xrandr", "-o", "left"])
    time.sleep(5) 
    subprocess.Popen(["xrandr", "-o", "right"])
    time.sleep(5) 
