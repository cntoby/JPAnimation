//
//  JPCollectionViewCell.h
//  JPAnimation
//
//  Created by lava on 2016/12/27.
//  Copyright © 2016年 NewPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPCollectionViewCell : UICollectionViewCell

/** dataSrouce */
@property(nonatomic, strong)NSString *dataString;

@property (weak, nonatomic) IBOutlet UIImageView *coverImageView;

@end