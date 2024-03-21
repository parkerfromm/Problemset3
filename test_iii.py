import time
import numpy as np
import sys


start_time = time.time()

def test_iii(size):
    a = np.random.rand(size)
    b = np.random.rand(size)
    c = np.random.rand(size)
    d = np.random.rand(size)
    e = np.random.rand(size)

    start_time = time.time()
    result = b * c + d / e - 3.14
    end_time = time.time()

    time_elapsed = end_time - start_time

    print(f"test_iii rand in {time_elapsed} seconds")




# def main??{

#     test_iii( commandline argument)
# }

if __name__=="__main__":
    size = int(sys.argv[1])
    test_iii(size)

# def main??{

#     test_iii( commandline argument)
# }