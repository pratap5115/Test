//
//  TableDataTableViewCell.h
//  Assignment
//
//  Created by Pratap on 20/05/16.
//  Copyright © 2016 Pratap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIView.h>
#import "InfoObject.h"

@interface TableDataTableViewCell : UITableViewCell

@property (strong, nonatomic)UILabel *lblDescription;
-(void)updateData:(InfoObject *)infObj;
@end
