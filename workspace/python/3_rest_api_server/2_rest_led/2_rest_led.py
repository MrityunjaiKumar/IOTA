
from flask import Flask
app =Flask(__name__)

@app.route("/",methods=['GET'])
def home():
    return "Hi form AID-IOT"

ledState=False
## http://127.0.0.1:5000/updateLed/1
@app.route("/updateLed/<state>",methods=['POST'])
def checkLedState(state=None):
    global ledState
    if(state==None):
        return "unknown state of led mentioned"
    if(state=="1"):
        ledState=True
    elif(state=="0"):
        ledState=False
    else:
        return "unknown state of led mentioned"
    return "ledstate = "+str(ledState)

@app.route("/getLed",methods=['GET'])
def getLedState():
    global ledState
    return str(ledState)
if __name__ =='__main__':
    app.run(debug=True)