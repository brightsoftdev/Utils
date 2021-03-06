//
//  UITableView+Utils.m
//  Intuit
//
//  Created by Глеб Тарасов on 13.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "UITableView+Utils.h"

@implementation UITableView (Utils)

- (id)cellFromNib:(Class)class
{
    NSString *cellName = NSStringFromClass(class);
    id result = [self dequeueReusableCellWithIdentifier:cellName];
    
    if (result)
        return result;
    else
        return [class fromNib];
}

@end
