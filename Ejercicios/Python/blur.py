from PIL import Image, ImageFilter

before = Image.open("brige.bmp")
after = before.filter(ImageFilter.BLUR)
after.save("out.bmp")