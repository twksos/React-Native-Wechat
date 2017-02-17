//
//  RCTWeChat.h
//  RCTWeChat
//
//  Created by Yorkie Liu on 10/16/15.
//  Copyright © 2015 WeFlex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if __has_include(<React/RCTBridgeModule.h>)
    #import <React/RCTBridgeModule.h>
    #import <React/RCTEventDispatcher.h>
    #import <React/RCTImageLoader.h>
    #import <RCTImageUtils.h>
#else
    #import "RCTBridgeModule.h"
    #import "RCTBridge.h"
    #import "RCTEventDispatcher.h"
    #import "RCTLog.h"
    #import "RCTImageLoader.h"
    #import "RCTImageUtils.h"
#endif
#import "WXApi.h"

// define share type constants
#define RCTWXShareTypeNews @"news"
#define RCTWXShareTypeThumbImageUrl @"thumbImage"
#define RCTWXShareTypeImageUrl @"imageUrl"
#define RCTWXShareTypeImageFile @"imageFile"
#define RCTWXShareTypeImageResource @"imageResource"
#define RCTWXShareTypeText @"text"
#define RCTWXShareTypeVideo @"video"
#define RCTWXShareTypeAudio @"audio"
#define RCTWXShareTypeFile @"file"

#define RCTWXShareType @"type"
#define RCTWXShareTitle @"title"
#define RCTWXShareDescription @"description"
#define RCTWXShareWebpageUrl @"webpageUrl"
#define RCTWXShareImageUrl @"imageUrl"

#define RCTWXEventName @"WeChat_Resp"

@interface RCTWeChat : NSObject <RCTBridgeModule, WXApiDelegate>

@property NSString* appId;

@end
