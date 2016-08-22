// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Activity API (appsactivity/v1)
// Description:
//   Provides a historical view of activity.
// Documentation:
//   https://developers.google.com/google-apps/activity/

#import "GTLRAppsActivityQuery.h"

#import "GTLRAppsActivityObjects.h"

// ----------------------------------------------------------------------------
// Constants

// groupingStrategy
NSString * const kGTLRAppsActivityGroupingStrategyDriveUi = @"driveUi";
NSString * const kGTLRAppsActivityGroupingStrategyNone    = @"none";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRAppsActivityQuery

@dynamic fields;

@end

@implementation GTLRAppsActivityQuery_ActivitiesList

@dynamic driveAncestorId, driveFileId, groupingStrategy, pageSize, pageToken,
         source, userId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"driveAncestorId" : @"drive.ancestorId",
    @"driveFileId" : @"drive.fileId"
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"activities";
  GTLRAppsActivityQuery_ActivitiesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAppsActivity_ListActivitiesResponse class];
  query.loggingName = @"appsactivity.activities.list";
  return query;
}

@end