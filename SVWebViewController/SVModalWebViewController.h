//
//  SVModalWebViewController.h
//
//  Created by Oliver Letterer on 13.08.11.
//  Copyright 2011 Home. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <UIKit/UIKit.h>

@class SVWebViewController;

@interface SVModalWebViewController : UINavigationController

@property (nonatomic, strong) UIColor *barsTintColor;
@property (nonatomic, strong) UIColor *toolbarIconTintColor;

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL *)URL;

@end
