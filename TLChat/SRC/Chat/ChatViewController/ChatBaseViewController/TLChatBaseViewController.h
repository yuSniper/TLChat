//
//  TLChatBaseViewController.h
//  TLChat
//
//  Created by 李伯坤 on 16/2/15.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TLChatViewControllerProxy.h"
#import "TLChatTableViewController.h"
#import "TLEmojiDisplayView.h"
#import "TLImageExpressionDisplayView.h"

#import "TLMoreKeyboardDelegate.h"
#import "TLMessageManager+MessageRecord.h"

#import "TLChatBar.h"
#import "TLMoreKeyboard.h"
#import "TLEmojiKeyboard.h"

#import "TLChatUserProtocol.h"

@interface TLChatBaseViewController : UIViewController <TLChatViewControllerProxy, TLMoreKeyboardDelegate>
{
    TLChatBarStatus lastStatus;
    TLChatBarStatus curStatus;
}

/// 用户信息
@property (nonatomic, strong) id<TLChatUserProtocol> user;

/// 聊天对象
@property (nonatomic, strong) id<TLChatUserProtocol> partner;

/// 消息展示页面
@property (nonatomic, strong) TLChatTableViewController *chatTableVC;

/// 聊天输入栏
@property (nonatomic, strong) TLChatBar *chatBar;

/// 更多键盘
@property (nonatomic, strong) TLMoreKeyboard *moreKeyboard;

/// 表情键盘
@property (nonatomic, strong) TLEmojiKeyboard *emojiKeyboard;

/// emoji展示view
@property (nonatomic, strong) TLEmojiDisplayView *emojiDisplayView;

/// 图片表情展示view
@property (nonatomic, strong) TLImageExpressionDisplayView *imageExpressionDisplayView;

/**
 *  设置“更多”键盘元素
 */
- (void)setChatMoreKeyboardData:(NSMutableArray *)moreKeyboardData;

/**
 *  设置“表情”键盘元素
 */
- (void)setChatEmojiKeyboardData:(NSMutableArray *)emojiKeyboardData;

/**
 *  重置chatVC
 */
- (void)resetChatVC;

/**
 *  发送图片信息
 */
- (void)sendImageMessage:(UIImage *)image;

@end
