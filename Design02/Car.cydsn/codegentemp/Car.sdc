# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Yicheng\Dropbox\Princeton\Junior\ELE302\ELE302-Carlab\Design02\Car.cydsn\Car.cyprj
# Date: Fri, 27 Mar 2015 14:45:46 GMT
#set_units -time ns
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {HE_TIMER_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 3 5} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {STEERING_PWM_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 9 17} [list [get_pins {ClockBlock/dclk_glb_1}]]
create_generated_clock -name {MOTOR_PWM_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 25 49} [list [get_pins {ClockBlock/dclk_glb_2}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\Yicheng\Dropbox\Princeton\Junior\ELE302\ELE302-Carlab\Design02\Car.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Yicheng\Dropbox\Princeton\Junior\ELE302\ELE302-Carlab\Design02\Car.cydsn\Car.cyprj
# Date: Fri, 27 Mar 2015 14:45:30 GMT
