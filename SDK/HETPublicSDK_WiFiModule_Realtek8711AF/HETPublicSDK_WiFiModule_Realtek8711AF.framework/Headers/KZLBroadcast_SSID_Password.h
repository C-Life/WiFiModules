//
//  KZLBroadcast_SSID_Password.h
//  HETPublicSDK_DeviceBind
//
//  Created by hcc on 2017/1/12.
//  Copyright © 2017年 HET. All rights reserved.
//  暂不支持armv7s

#import <Foundation/Foundation.h>

@interface KZLBroadcast_SSID_Password : NSObject
/**
 *  开始广播即将连接的路由器SSID和密码给指定厂商的WIFI模组设备
 */
- (void)startBroadcast_SSID:(NSString *)ssid
                   Password:(NSString *)password;
/**
 *  停止广播SSID和密码给指定厂商的WIFI模组设备
 */
- (void)stopBroadcast;
@end
