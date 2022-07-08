
#các kiểu dữ liệu cơ bản trong python: bool, None, int, float, str

var_bool = True
###print(f"kiểu dữ liệu var_bool = {type(var_bool)}")

a = 4 + True
var_none = "email"
#print(F"var none là {type(None)}")

#if var_none:
#    print(f"Email address là: {var_none}")
#else :
#   print(f"Email address rỗng hoặc khác : {var_none}")

#print (type(1))
#print (type(-12))
#print(type(0.12))
#print(type(3E2),3E2)

#Các phép toán + - * / **-mũ //-phần nguyên %-phần dư
# print(10/3)
# print(10.2*3.3) 
# print(10**3) #10^3 = 1000
# print((10.2)**(3.3))
# print(10.22/2.2) # chia
# print((10.22)//(2.2)) # phần nguyên =4
# print(10%3) #phần dư = 1

# #hàm toán cơ bản
# print(pow (10,3)) # 10**3
# print(abs(-6.9)) #6.9
# print(round(6.9)) #7 
# print(round(5.658,2)) #5.66
# print(bin(512)) # '0b1000000000' --> binary format
# print(hex(512)) # 0x200 --> hexadecimal format     
def main():
    print("hello world")
    cToFConvert()

def cToFConvert():
    while True:
        cTemp = float(input ("please input C degree: "))
        print(f"kiểu dữ liệu : {type(cTemp)} , (cTemp) is  {cTemp}")
        # print()
        if (cTemp):
            #if (float(cTemp)):
                cTemp = float(cTemp)
                fTemp = (cTemp*9/5)+32  
        
                print(f"{cTemp} độ C đổi thành độ f là: {fTemp}")
                break
            #else:
                # print("please input number!")
                # continue
        else:
            print("C degree input is Empty")
            continue

if __name__== "__main__":
    main()

