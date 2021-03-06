//
//  NSString+Utils.h
//  Intuit
//
//  Created by Глеб Тарасов on 13.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Utils)

- (BOOL)containsString:(NSString *)string;
- (BOOL)startsWith:(NSString *)string;
- (BOOL)endsWith:(NSString *)string;
- (NSString *)stringByTrimming;

- (CGFloat)heightWithSystemFont:(CGFloat)fontSize
             constrainedToWidth:(CGFloat)width;

@end
