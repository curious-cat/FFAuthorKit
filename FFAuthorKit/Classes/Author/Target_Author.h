//
//  Target_Author.h
//  FFAuthorKit
//
//  Created by curious_cat on 2017/12/13.
//

#import <Foundation/Foundation.h>
#import "FFAuthorKit.h"

@interface Target_Author : NSObject

/// FFAuthorDetailViewController控制器

- (UIViewController*)Action_authorDetailViewController:(NSDictionary*)params;

///返回转化好的Reformer对象

- (NSDictionary*)Action_authorReformerWithOriginData:(NSDictionary*)params;

/// Reformer对象

- (NSDictionary *)Action_authorReformer:(NSDictionary*)params;

/// Request对象

- (APIRequest*)Action_authorAPIRequest:(NSDictionary*)params;

@end
