//
//  BugSquasherUtil.h
//  JiraApp
//
//  Created by John Doran on 11/05/2013.
//  Copyright (c) 2013 John Doran. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JDBugSquasherUtil : NSObject

+(NSString*)getUsername;
+(NSString*)getPassword;

+(void)setUsername:(NSString*)username;
+(void)setPassword:(NSString*)pw;

@end
