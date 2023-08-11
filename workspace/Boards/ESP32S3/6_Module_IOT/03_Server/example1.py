from flask import Flask

app = Flask(__name__)

@app.route("/")
def hello():
	return "Hello World!"

@app.route("/v1/user")
def sendUser():
	return "User 1"

if __name__== '__main__':
	app.run(debug=True, port=5010,host='0.0.0.0')