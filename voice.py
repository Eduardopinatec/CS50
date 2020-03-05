import speech_recognition

words = input ("Say something! \n").lower()

if "hello" in words:
    print("Hello to you too")
elif "how are you in" in words:
    print("I am well, thanks")
else:
    print("Hug?")
