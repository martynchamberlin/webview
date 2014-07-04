//
//  CustomNSWindow.h
//  WebApp2
//
//  Created by Martyn Chamberlin on 7/3/14.
//  Copyright (c) 2014 Martyn Chamberlin. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface CustomNSWindow : NSWindow

@property (retain, nonatomic) IBOutlet WebView *webView;

- (void)setupWebPage;

@end
