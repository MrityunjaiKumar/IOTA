from checkPrime import isThisPrimeNum

from flask import Flask
app =Flask(__name__)

@app.route("/",methods=['GET'])
def home():
    return "Hi form AID-IOT"


## http://127.0.0.1:5000/isPrime/11
@app.route("/isPrime/<num>",methods=['GET'])
def isPrime(num=None):
    if(num==None):
        return "Error pass nnumber"
    return str(isThisPrimeNum(int(num)))

if __name__ =='__main__':
    app.run(debug=True)