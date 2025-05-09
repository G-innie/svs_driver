import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ginnie/colcon_ws/src/svs_driver/install/svs_driver'
