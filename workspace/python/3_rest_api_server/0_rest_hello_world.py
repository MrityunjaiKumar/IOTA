from checkPrime import isThisPrimeNum

from flask import Flask
app =Flask(__name__)

@app.route("/",methods=['GET'])
def home():
    return "Hi form AID-IOT"

if __name__ =='__main__':
    app.run(debug=True)