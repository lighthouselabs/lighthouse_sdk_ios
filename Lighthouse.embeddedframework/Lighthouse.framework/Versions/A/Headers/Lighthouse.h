//
//  Lighthouse.h
//  Lighthouse
//
//  Copyright (c) 2014 Jamgo. All rights reserved.
//

#ifndef __LIGHTHOUSE__
#define __LIGHTHOUSE__

#import "LHPublicConstants.h"

#endif /* __LIGHTHOUSE__ */

/**
 *  The Lighthouse object enables you to interact with the Lighthouse platform.
 */
@interface Lighthouse : NSObject


/**
 *  Initialise Lighthouse service object.
 *
 *  @param clientKey clientKey Identifies your app to the lighthouse platform.
 *  @param secretKey secretKey Authenticates your app to the lighthouse platform.
 *  @param env       env Choose which lighthouse platform environment to connect to (PROD/UAT).
 *
 *  @return Initialized Lighthouse object.
 */
+ (Lighthouse *)initWithClientKey:(NSString *)clientKey secretKey:(NSString *)secretKey environment:(LighthouseEnvironment)env;

/**
 *  Convenience method to access the initialised Lighthouse object.
 *
 *  @return Initialized Lighthouse object, or nil if not yet initialized.
 */
+ (Lighthouse *)sharedInstance;

/**
 *  Lighthouse requires access to location services. This method allows for a better user experience
 *  as you can control the timing of this iOS prompt - it is suggested that before calling this method you 
 *  present the user with an explanation for why location services are needed. Once location services are 
 *  granted, calling this method will have no effect.
 */
- (void)requestLocationAccess;

/*
 *  Allows you to set a user identifier that is meaningful to your app.
 */
- (void)setUserIdentifier:(NSString *)userIdentifer;

/*
 *  Clear the user identifer, removing the mapping between the device and the user identifier.
 */
- (void)clearUserIdentifier;



@end