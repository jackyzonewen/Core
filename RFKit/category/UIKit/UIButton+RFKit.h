/*!
    UIButton extension
    RFKit

    Copyright (c) 2012-2014 BB9z
    https://github.com/BB9z/RFKit

    The MIT License (MIT)
    http://www.opensource.org/licenses/mit-license.php
 */

#import "RFRuntime.h"

@interface UIButton (RFKit)

/**
 Give a image name, this will auto set a button`s image of all state.
 
 @discussion 
 At this time, only png file supported.
 If an image named "test1", it will try set "test1_highlighted.png"
 (or "test1_highlighted@2x.png") for UIControlStateHighlighted. UIControlStateDisabled`s
 suffix is "_disabled", UIControlStateSelected`s is _selected.
 
 @param imageName   Resource name of the image. Set to nil will not change, set to @""
    will clear the button image.
 @param backGroundImageName Resource name of the background image. Set to nil will not
    change, set to @"" will clear the button background image.
 */
- (void)setResourceImage:(NSString *)imageName background:(NSString *)backGroundImageName;

/** Change the background image to be resizable with the specified cap insets for the specified button state.

 @param capInsets The values to use for the cap insets.
 @param state The state that uses the specified image. The values are described in UIControlState.
 */
- (void)setBackgroundImageResizingCapInsets:(UIEdgeInsets)capInsets forState:(UIControlState)state NS_AVAILABLE_IOS(5_0);

@end
