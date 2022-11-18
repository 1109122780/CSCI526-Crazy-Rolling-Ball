using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Runemark.Common
{
    public class RMBase : MonoBehaviour
    {
        public virtual string Title { get { return ""; } }
        public virtual string Description { get { return ""; } }
    }
}
