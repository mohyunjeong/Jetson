from servoserial import ServoSerial

servo = ServoSerial()

pan = 2400 # 좌우 중앙값, 인덱스 1번
tilt = 2100 # 상하 중앙값, 인덱스 2번

def pan_left() : # 왼쪽으로 머리를 돌리기
    
    global pan # 전역변수 사용하기 위해
    
    pan += 100
    
    servo.Servo_serial_control(1, pan)
    
def pan_right() : # 오른쪽으로 머리를 돌리기
    
    global pan
    
    pan -= 100
    
    servo.Servo_serial_control(1, pan)
    
def tilt_up() : # 위로 올리기
    
    global tilt
    
    tilt += 100
    
    servo.Servo_serial_control(2, tilt)
    
def tilt_down() : #아래로 내리기

    global tilt
    
    tilt -= 100
    
    servo.Servo_serial_control(2, tilt)
    
def center() :
    
    global pan, tilt
    
    pan = 2400
    tilt = 2100
    
    servo.Servo_serial_double_control(1, pan, 2, tilt)