//
//  PinterestLikeMenuItem.h
//  PinterestLikeMenu
//
//  Created by Tu You on 12/21/13.
//  Copyright (c) 2013 Tu You. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kMenuItemLength  (40)

typedef void(^SelectedBlock)(void);

@interface PinterestLikeMenuItem : UIView

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) UIImage *selectedImage;
@property (nonatomic, strong) SelectedBlock selectedBlock;
@property (nonatomic, strong) UILabel *label;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, assign) float distance;

- (id)initWithImage:(UIImage *)image
       selctedImage:(UIImage *)selectedImage
      selectedBlock:(SelectedBlock)selectedBlock;

@end
