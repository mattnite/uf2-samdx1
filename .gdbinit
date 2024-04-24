target extended-remote /dev/cu.usbmodem72ADEFF41
#target extended-remote :2000
#set debug remote 1
monitor tpwr enable
monitor swd_scan
#set mem inaccessible-by-default off
attach 1
#load
#detach
#quit

#break main.c:344
#commands
#    print "End of Reset flag Set"
#    continue
#end
#
#break cdc_enumerate.c:774
#commands
#    printf "USBReq=%d wValue=%d wIndex=%d wLen=%d\n", reqId, wValue, wIndex, wLength
#    continue
#end
#
#break msc.c:737
#commands
#    printf "b_read=%d udi_msc_addr=%d trans_size=%d\n", b_read, udi_msc_addr, trans_size
#    continue
#end
#
#break USB_Write
#commands
#    continue
#end
