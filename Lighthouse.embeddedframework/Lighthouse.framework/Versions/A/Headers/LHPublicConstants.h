//
//  LHPublicConstants.h
//  Lighthouse
//
//  Copyright (c) 2014 Jamgo. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Lighthouse platform environments
 */
typedef NS_ENUM(NSUInteger, LighthouseEnvironment) {
    /**
     *  Production
     */
    LH_PROD,
    /**
     *  User Acceptance Testing
     */
    LH_UAT
};

@interface LHPublicConstants : NSObject

@end
